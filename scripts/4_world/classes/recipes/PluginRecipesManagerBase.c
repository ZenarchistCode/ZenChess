modded class PluginRecipesManagerBase extends PluginBase
{
	override void RegisterRecipies()
	{
		super.RegisterRecipies();
		RegisterRecipe(new Zen_CraftChessBoard);
		RegisterRecipe(new Zen_CraftPawn);
		RegisterRecipe(new Zen_CraftRook);
		RegisterRecipe(new Zen_CraftKnight);
		RegisterRecipe(new Zen_CraftBishop);
		RegisterRecipe(new Zen_CraftKing);
		RegisterRecipe(new Zen_CraftQueen);
	}
};