//Made by Pechyvo, Pechyvo#6299
class PchThermReportData {
    bool Enable;
    bool ShowImmunityLevel;
    bool ShowCholeral
    bool ShowInfluenza;
    bool ShowSalmonella;
    bool ShowFoodPoison;
    bool ShowChemicalPoison;
    bool ShowWoundInfection;
    bool ShowVirus;

    void PchThermReportData(bool _enable = false, bool _immunity = false, bool _choleral = false, bool _influenza = false, bool _salmonella = false, bool _foodpoison = false, bool _chemicalpoison = false, bool _woundinfection = false, bool _virus = false) {
        Enable = _enable;
        ShowImmunityLevel = _immunity;
        ShowCholeral = _choleral;
        ShowInfluenza = _influenza;
        ShowSalmonella = _salmonella;
        ShowFoodPoison = _foodpoison;
        ShowChemicalPoison = _chemicalpoison;
        ShowWoundInfection = _woundinfection;
        ShowVirus = _virus;
    }
};
