#include <Geode/Geode.hpp>

using namespace geode::prelude;

$on_mod(Loaded) {
    log::info("PredictiveBuffer loaded");
}

class $modify(MyLayer, PlayLayer) {
    bool init(GJGameLevel* level, bool useReplay, bool dontCreateObjects) {
        if (!PlayLayer::init(level, useReplay, dontCreateObjects)) {
            return false;
        }

        log::info("PlayLayer loaded!");
        return true;
    }
};
