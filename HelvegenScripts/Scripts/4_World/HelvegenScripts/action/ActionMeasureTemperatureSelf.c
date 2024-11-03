//Made by Pechyvo, Pechyvo#6299
class PchThermometerReport {
	static void DisplayReport(ActionBase action, PlayerBase player, PlayerBase target)
	{
		PchHelvegenConfig config = PchHelvegenConfig.Load();

		EStatLevels immunityLevel = target.GetImmunityLevel();
		string immunityLevelStr;
		switch (immunityLevel)
		{
			case EStatLevels.GREAT: immunityLevelStr = "GREAT"; break;
			case EStatLevels.HIGH: immunityLevelStr = "HIGH"; break;
			case EStatLevels.MEDIUM: immunityLevelStr = "MEDIUM"; break;
			case EStatLevels.LOW: immunityLevelStr = "LOW"; break;
			case EStatLevels.CRITICAL: immunityLevelStr = "CRITICAL"; break;
		}
		action.SendMessageToClient(player, "Medical Report:");
		if (config.ThermometerReport.ShowImmunityLevel)
			action.SendMessageToClient(player, "Immunity Level: " + immunityLevelStr);
		if (config.ThermometerReport.ShowCholeral)
			action.SendMessageToClient(player, "Cholera: " + target.GetSingleAgentCount(eAgents.CHOLERA).ToString());
		if (config.ThermometerReport.ShowInfluenza)
			action.SendMessageToClient(player, "Influenza: " + target.GetSingleAgentCount(eAgents.INFLUENZA).ToString());
		if (config.ThermometerReport.ShowSalmonella)
			action.SendMessageToClient(player, "Salmonella: " + target.GetSingleAgentCount(eAgents.SALMONELLA).ToString());
		if (config.ThermometerReport.ShowFoodPoison)
			action.SendMessageToClient(player, "Food Poison: " + target.GetSingleAgentCount(eAgents.FOOD_POISON).ToString());
		if (config.ThermometerReport.ShowChemicalPoison)
			action.SendMessageToClient(player, "Chemical Poison: " + target.GetSingleAgentCount(eAgents.CHEMICAL_POISON).ToString());
		if (config.ThermometerReport.ShowWoundInfection)
			action.SendMessageToClient(player, "Wound Infection: " + target.GetSingleAgentCount(eAgents.WOUND_AGENT).ToString());
		#ifdef ZenVirus
		if (config.ThermometerReport.ShowVirus)
			action.SendMessageToClient(player, "Zombie Virus: " + target.GetSingleAgentCount(VirusAgents.VIRUS).ToString());
		#endif
	}
};

modded class ActionMeasureTemperatureSelf {
	override void OnFinishProgressServer(ActionData action_data)
	{	
		super.OnFinishProgressServer(action_data);

		PchHelvegenConfig config = PchHelvegenConfig.Load();

		if (config.ThermometerReport.Enable)
			PchThermometerReport.DisplayReport(this, action_data.m_Player, action_data.m_Player);
	}
};
