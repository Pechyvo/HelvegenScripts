//Made by Pechyvo, Pechyvo#6299
modded class CarScript {
    override void OnContact(string zoneName, vector localPos, IEntity other, Contact data)
    {
        float speed = GetSpeedometer();

        PchHelvegenConfig config = PchHelvegenConfig.Load();

        if (speed < config.Cars.SpeedThreshold)
            return;
		
        super.OnContact(zoneName, localPos, other, data);
    }
};
