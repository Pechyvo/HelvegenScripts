//Made by Pechyvo, Pechyvo#6299
class PchHelvegenConfig {
    ref PchCarsData Cars;
    ref PchThermReportData ThermometerReport;

    static PchHelvegenConfig Load() {
        if (!FileExist("$profile:HelvegenConfig\\"))
            MakeDirectory("$profile:HelvegenConfig\\");
        
        PchHelvegenConfig m_Settings = new PchHelvegenConfig();

        if (FileExist("$profile:HelvegenConfig\\settings.json"))
            JsonFileLoader<PchHelvegenConfig>.JsonLoadFile("$profile:HelvegenConfig\\settings.json", m_Settings);
        else {
            m_Settings.Defaults();
            JsonFileLoader<PchHelvegenConfig>.JsonSaveFile("$profile:HelvegenConfig\\settings.json", m_Settings);
        }

        return m_Settings;
    }

    void Defaults() {
        Cars = new PchCarsData(true, true, 50);
        ThermometerReport = new PchThermReportData(true, true, true, true, true, true, true, true, true);
    }
};
