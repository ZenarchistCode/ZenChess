class Zen_ChessPieceBase extends ItemBase
{
	override void OnWasAttached(EntityAI parent, int slot_id)
	{
		super.OnWasAttached(parent, slot_id);

		#ifndef SERVER
		EffectSound effect = SEffectManager.PlaySound("ZenChess_SoundSet", GetPosition());
		effect.SetAutodestroy(true);
		#endif
	}

	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
	}
};
