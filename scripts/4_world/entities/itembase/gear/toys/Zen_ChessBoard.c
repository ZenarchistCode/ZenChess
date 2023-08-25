class Zen_ChessBoard extends ItemBase
{
	override bool IsRefresherSignalingViable()
	{
		return !IsRuined();
	}

	override void EEHealthLevelChanged(int oldLevel, int newLevel, string zone)
	{
		super.EEHealthLevelChanged(oldLevel, newLevel, zone);

		if (!GetGame().IsDedicatedServer())
			return;

		if (newLevel == GameConstants.STATE_RUINED)
			MiscGameplayFunctions.DropAllItemsInInventoryInBounds(this, vector.Zero);
	}

	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
	}
};
