//Made by Pechyvo, Pechyvo#6299
class PchCarsData {
    bool NoCheckPulseInVehicle;
    bool NvgInVehicle;
    int SpeedThreshold;

    void PchCarsData(bool _pulse = false, bool _nvg = false, int _threshold = 0) {
        NoCheckPulseInVehicle = _pulse;
        NvgInVehicle = _nvg;
        SpeedThreshold = _threshold;
    }
};
