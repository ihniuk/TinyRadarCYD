#pragma once

#include "Aircraft.h"

struct TrackedAircraft {
    Aircraft state;
    unsigned long lastSeen;  // millis() at last API update

    std::pair<float, float> PredictPosition() const {
        float dt = (millis() - lastSeen) / 1000.0f;  // seconds elapsed

        float headingRad = radians(state.trueTrack);

        // convert m/s displacement to degrees
        float deltaLat = (state.velocity * dt * cos(headingRad)) / 111320.0f;
        float deltaLon = (state.velocity * dt * sin(headingRad)) / (111320.0f * cos(radians(state.latitude)));

        return { state.latitude + deltaLat, state.longitude + deltaLon };
    }
};