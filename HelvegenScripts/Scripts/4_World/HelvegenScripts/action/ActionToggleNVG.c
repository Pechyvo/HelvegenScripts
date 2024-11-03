//Made by Pechyvo, Pechyvo#6299
modded class ActionToggleNVG: ActionBase {
	override bool CanBeUsedInVehicle()
	{	
		PchHelvegenConfig config = PchHelvegenConfig.Load();

		if (config.Cars.NvgInVehicle)
			return true;

		return false;
	}
};
