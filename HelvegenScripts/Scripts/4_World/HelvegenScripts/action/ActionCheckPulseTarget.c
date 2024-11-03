//Made by Pechyvo, Pechyvo#6299
modded class ActionCheckPulseTarget {
    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
        PlayerBase ntarget = PlayerBase.Cast(target.GetObject());

		PchHelvegenConfig config = PchHelvegenConfig.Load();
		
		if (ntarget && ntarget.IsAlive() && !ntarget.IsInVehicle() && config.Cars.NoCheckPulseInVehicle)
			return true;
        
		return false;
    }
};
