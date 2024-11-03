//Made by Pechyvo, Pechyvo#6299
modded class ActionMeasureTemperatureTarget {
	override void OnFinishProgressServer( ActionData action_data )
	{	
		super.OnFinishProgressServer(action_data);

		PlayerBase ntarget = PlayerBase.Cast( action_data.m_Target.GetObject() );

		PchHelvegenConfig config = PchHelvegenConfig.Load();

		if (config.ThermometerReport.Enable)
        	PchThermometerReport.DisplayReport(this, action_data.m_Player, ntarget);
	}
};
