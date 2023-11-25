// 3D Model: https://sketchfab.com/3d-models/wooden-chess-set-90151fb0fb294e56b45e52b001a884db

class CfgPatches
{
	class ZenChess
	{
		requiredVersion = 1.0;
		requiredAddons[] = {};
		units[] = {};
	};
};

class CfgMods
{
	class ZenChess
	{
		dir = "ZenChess";
		picture = "";
		action = "";
		hideName = 1;	
		hidePicture = 1;
		name = "ZenChess";
		credits = "";
		author = "Zenarchist";
		authorID = "0";
		version = "1.0";
		type = "mod";
		dependencies[] = { "Game","World","Mission" };
		class defs
		{
			class imageSets
			{
				files[] =
				{
					"ZenChess/data/gui/zenchess_whiteslot.imageset",
					"ZenChess/data/gui/zenchess_blackslot.imageset"
				};
			};
			class worldScriptModule
			{
				value = "";
				files[] = { "ZenChess/scripts/4_World" };
			};
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class Zen_ChessBoard : Inventory_Base
	{
		scope = 2;
		displayName = "$STR_ZenChessBoardName";
		descriptionShort = "$STR_ZenChessBoardDesc";
		model = "ZenChess\data\model\chessboard.p3d";
		weight = 500;
		itemSize[] = { 3,3 };
		itemBehaviour = 1;
		repairableWithKits[] = { 8 };
		repairCosts[] = { 30 };
		class Cargo
		{
			itemsCargoSize[]={8,4};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		attachments[] = 
		{ 
			"ZenChess1",
			"ZenChess2",
			"ZenChess3",
			"ZenChess4",
			"ZenChess5",
			"ZenChess6",
			"ZenChess7",
			"ZenChess8",
			"ZenChess9",
			"ZenChess10",
			"ZenChess11",
			"ZenChess12",
			"ZenChess13",
			"ZenChess14",
			"ZenChess15",
			"ZenChess16",
			"ZenChess17",
			"ZenChess18",
			"ZenChess19",
			"ZenChess20",
			"ZenChess21",
			"ZenChess22",
			"ZenChess23",
			"ZenChess24",
			"ZenChess25",
			"ZenChess26",
			"ZenChess27",
			"ZenChess28",
			"ZenChess29",
			"ZenChess30",
			"ZenChess31",
			"ZenChess32",
			"ZenChess33",
			"ZenChess34",
			"ZenChess35",
			"ZenChess36",
			"ZenChess37",
			"ZenChess38",
			"ZenChess39",
			"ZenChess40",
			"ZenChess41",
			"ZenChess42",
			"ZenChess43",
			"ZenChess44",
			"ZenChess45",
			"ZenChess46",
			"ZenChess47",
			"ZenChess48",
			"ZenChess49",
			"ZenChess50",
			"ZenChess51",
			"ZenChess52",
			"ZenChess53",
			"ZenChess54",
			"ZenChess55",
			"ZenChess56",
			"ZenChess57",
			"ZenChess58",
			"ZenChess59",
			"ZenChess60",
			"ZenChess61",
			"ZenChess62",
			"ZenChess63",
			"ZenChess64"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] =
					{

						{
							1,

							{
								"ZenChess\data\model\textures\ChessBoard.rvmat"
							}
						},

						{
							0.69999999,

							{
								"ZenChess\data\model\textures\ChessBoard.rvmat"
							}
						},

						{
							0.5,

							{
								"ZenChess\data\model\textures\ChessBoard_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"ZenChess\data\model\textures\ChessBoard_damage.rvmat"
							}
						},

						{
							0,

							{
								"ZenChess\data\model\textures\ChessBoard_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		soundImpactType = "wood";
	};
	class Zen_ChessBoard_Static : Zen_ChessBoard {};

	class Zen_ChessPieceBase : Inventory_Base
	{
		scope = 0;
		descriptionShort = "$STR_ZenChessPieceDesc";
		weight = 1;
		itemSize[] = { 1,1 };
		itemBehaviour = 1;
		repairableWithKits[] = { 8 };
		repairCosts[] = { 30 };
		inventorySlot[] =
		{
			"ZenChess1",
			"ZenChess2",
			"ZenChess3",
			"ZenChess4",
			"ZenChess5",
			"ZenChess6",
			"ZenChess7",
			"ZenChess8",
			"ZenChess9",
			"ZenChess10",
			"ZenChess11",
			"ZenChess12",
			"ZenChess13",
			"ZenChess14",
			"ZenChess15",
			"ZenChess16",
			"ZenChess17",
			"ZenChess18",
			"ZenChess19",
			"ZenChess20",
			"ZenChess21",
			"ZenChess22",
			"ZenChess23",
			"ZenChess24",
			"ZenChess25",
			"ZenChess26",
			"ZenChess27",
			"ZenChess28",
			"ZenChess29",
			"ZenChess30",
			"ZenChess31",
			"ZenChess32",
			"ZenChess33",
			"ZenChess34",
			"ZenChess35",
			"ZenChess36",
			"ZenChess37",
			"ZenChess38",
			"ZenChess39",
			"ZenChess40",
			"ZenChess41",
			"ZenChess42",
			"ZenChess43",
			"ZenChess44",
			"ZenChess45",
			"ZenChess46",
			"ZenChess47",
			"ZenChess48",
			"ZenChess49",
			"ZenChess50",
			"ZenChess51",
			"ZenChess52",
			"ZenChess53",
			"ZenChess54",
			"ZenChess55",
			"ZenChess56",
			"ZenChess57",
			"ZenChess58",
			"ZenChess59",
			"ZenChess60",
			"ZenChess61",
			"ZenChess62",
			"ZenChess63",
			"ZenChess64"
		};
		soundImpactType = "wood";
	};

	class Zen_ChessPieceBlackBase : Zen_ChessPieceBase
	{
		scope = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] =
					{

						{
							1,

							{
								"ZenChess\data\model\textures\ChessBlackPiece.rvmat"
							}
						},

						{
							0.69999999,

							{
								"ZenChess\data\model\textures\ChessBlackPiece.rvmat"
							}
						},

						{
							0.5,

							{
								"ZenChess\data\model\textures\ChessBlackPiece.rvmat"
							}
						},

						{
							0.30000001,

							{
								"ZenChess\data\model\textures\ChessBlackPiece.rvmat"
							}
						},

						{
							0,

							{
								"ZenChess\data\model\textures\ChessBlackPiece.rvmat"
							}
						}
					};
				};
			};
		};
	}

	class Zen_ChessPieceWhiteBase : Zen_ChessPieceBase
	{
		scope = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25;
					healthLevels[] =
					{

						{
							1,

							{
								"ZenChess\data\model\textures\ChessWhitePiece.rvmat"
							}
						},

						{
							0.69999999,

							{
								"ZenChess\data\model\textures\ChessWhitePiece.rvmat"
							}
						},

						{
							0.5,

							{
								"ZenChess\data\model\textures\ChessWhitePiece.rvmat"
							}
						},

						{
							0.30000001,

							{
								"ZenChess\data\model\textures\ChessWhitePiece.rvmat"
							}
						},

						{
							0,

							{
								"ZenChess\data\model\textures\ChessWhitePiece.rvmat"
							}
						}
					};
				};
			};
		};
	}

	class Zen_ChessWhitePawn : Zen_ChessPieceWhiteBase
	{
		scope = 2;
		displayName = "$STR_ZenChessPawn";
		model = "ZenChess\data\model\white_pawn.p3d";
	};
	class Zen_ChessBlackPawn : Zen_ChessPieceBlackBase
	{
		scope = 2;
		displayName = "$STR_ZenChessPawn";
		model = "ZenChess\data\model\black_pawn.p3d";
	};
	class Zen_ChessWhiteBishop : Zen_ChessPieceWhiteBase
	{
		scope = 2;
		displayName = "$STR_ZenChessBishop";
		model = "ZenChess\data\model\white_bishop.p3d";
	};
	class Zen_ChessBlackBishop : Zen_ChessPieceBlackBase
	{
		scope = 2;
		displayName = "$STR_ZenChessBishop";
		model = "ZenChess\data\model\black_bishop.p3d";
	};
	class Zen_ChessWhiteKing : Zen_ChessPieceWhiteBase
	{
		scope = 2;
		displayName = "$STR_ZenChessKing";
		model = "ZenChess\data\model\white_king.p3d";
	};
	class Zen_ChessBlackKing : Zen_ChessPieceBlackBase
	{
		scope = 2;
		displayName = "$STR_ZenChessKing";
		model = "ZenChess\data\model\black_king.p3d";
	};
	class Zen_ChessWhiteKnight : Zen_ChessPieceWhiteBase
	{
		scope = 2;
		displayName = "$STR_ZenChessKnight";
		model = "ZenChess\data\model\white_knight.p3d";
	};
	class Zen_ChessBlackKnight : Zen_ChessPieceBlackBase
	{
		scope = 2;
		displayName = "$STR_ZenChessKnight";
		model = "ZenChess\data\model\black_knight.p3d";
	};
	class Zen_ChessWhiteQueen : Zen_ChessPieceWhiteBase
	{
		scope = 2;
		displayName = "$STR_ZenChessQueen";
		model = "ZenChess\data\model\white_queen.p3d";
	};
	class Zen_ChessBlackQueen : Zen_ChessPieceBlackBase
	{
		scope = 2;
		displayName = "$STR_ZenChessQueen";
		model = "ZenChess\data\model\black_queen.p3d";
	};
	class Zen_ChessWhiteRook : Zen_ChessPieceWhiteBase
	{
		scope = 2;
		displayName = "$STR_ZenChessRook";
		model = "ZenChess\data\model\white_rook.p3d";
	};
	class Zen_ChessBlackRook : Zen_ChessPieceBlackBase
	{
		scope = 2;
		displayName = "$STR_ZenChessRook";
		model = "ZenChess\data\model\black_rook.p3d";
	};
};

class CfgSlots
{
	class Slot_ZenChess1
	{
		name = "ZenChess1";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess2
	{
		name = "ZenChess2";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess3
	{
		name = "ZenChess3";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess4
	{
		name = "ZenChess4";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess5
	{
		name = "ZenChess5";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess6
	{
		name = "ZenChess6";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess7
	{
		name = "ZenChess7";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess8
	{
		name = "ZenChess8";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess9
	{
		name = "ZenChess9";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess10
	{
		name = "ZenChess10";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess11
	{
		name = "ZenChess11";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess12
	{
		name = "ZenChess12";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess13
	{
		name = "ZenChess13";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess14
	{
		name = "ZenChess14";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess15
	{
		name = "ZenChess15";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess16
	{
		name = "ZenChess16";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess17
	{
		name = "ZenChess17";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess18
	{
		name = "ZenChess18";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess19
	{
		name = "ZenChess19";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess20
	{
		name = "ZenChess20";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess21
	{
		name = "ZenChess21";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess22
	{
		name = "ZenChess22";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess23
	{
		name = "ZenChess23";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess24
	{
		name = "ZenChess24";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess25
	{
		name = "ZenChess25";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess26
	{
		name = "ZenChess26";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess27
	{
		name = "ZenChess27";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess28
	{
		name = "ZenChess28";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess29
	{
		name = "ZenChess29";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess30
	{
		name = "ZenChess30";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess31
	{
		name = "ZenChess31";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess32
	{
		name = "ZenChess32";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess33
	{
		name = "ZenChess33";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess34
	{
		name = "ZenChess34";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess35
	{
		name = "ZenChess35";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess36
	{
		name = "ZenChess36";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess37
	{
		name = "ZenChess37";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess38
	{
		name = "ZenChess38";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess39
	{
		name = "ZenChess39";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess40
	{
		name = "ZenChess40";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess41
	{
		name = "ZenChess41";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess42
	{
		name = "ZenChess42";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess43
	{
		name = "ZenChess43";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess44
	{
		name = "ZenChess44";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess45
	{
		name = "ZenChess45";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess46
	{
		name = "ZenChess46";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess47
	{
		name = "ZenChess47";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess48
	{
		name = "ZenChess48";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess49
	{
		name = "ZenChess49";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess50
	{
		name = "ZenChess50";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess51
	{
		name = "ZenChess51";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess52
	{
		name = "ZenChess52";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess53
	{
		name = "ZenChess53";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess54
	{
		name = "ZenChess54";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess55
	{
		name = "ZenChess55";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess56
	{
		name = "ZenChess56";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess57
	{
		name = "ZenChess57";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess58
	{
		name = "ZenChess58";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess59
	{
		name = "ZenChess59";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess60
	{
		name = "ZenChess60";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess61
	{
		name = "ZenChess61";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess62
	{
		name = "ZenChess62";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
	class Slot_ZenChess63
	{
		name = "ZenChess63";
		displayName = "";
		ghostIcon = "set:zenchess_blackslot image:blackslot";
	};
	class Slot_ZenChess64
	{
		name = "ZenChess64";
		displayName = "";
		ghostIcon = "set:zenchess_whiteslot image:whiteslot";
	};
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ZenChessProxyBase : ProxyAttachment
	{
		scope = 1;
		model = "\ZenChess\data\model\proxy\ZenChessProxy.p3d";
	};
	class ProxyZenChessProxy1  : ZenChessProxyBase { inventorySlot = "ZenChess64"; };
	class ProxyZenChessProxy2  : ZenChessProxyBase { inventorySlot = "ZenChess63"; };
	class ProxyZenChessProxy3  : ZenChessProxyBase { inventorySlot = "ZenChess62"; };
	class ProxyZenChessProxy4  : ZenChessProxyBase { inventorySlot = "ZenChess61"; };
	class ProxyZenChessProxy5  : ZenChessProxyBase { inventorySlot = "ZenChess60"; };
	class ProxyZenChessProxy6  : ZenChessProxyBase { inventorySlot = "ZenChess59"; };
	class ProxyZenChessProxy7  : ZenChessProxyBase { inventorySlot = "ZenChess58"; };
	class ProxyZenChessProxy8  : ZenChessProxyBase { inventorySlot = "ZenChess57"; };
	class ProxyZenChessProxy9  : ZenChessProxyBase { inventorySlot = "ZenChess56"; };
	class ProxyZenChessProxy10 : ZenChessProxyBase { inventorySlot = "ZenChess55"; };
	class ProxyZenChessProxy11 : ZenChessProxyBase { inventorySlot = "ZenChess54"; };
	class ProxyZenChessProxy12 : ZenChessProxyBase { inventorySlot = "ZenChess53"; };
	class ProxyZenChessProxy13 : ZenChessProxyBase { inventorySlot = "ZenChess52"; };
	class ProxyZenChessProxy14 : ZenChessProxyBase { inventorySlot = "ZenChess51"; };
	class ProxyZenChessProxy15 : ZenChessProxyBase { inventorySlot = "ZenChess50"; };
	class ProxyZenChessProxy16 : ZenChessProxyBase { inventorySlot = "ZenChess49"; };
	class ProxyZenChessProxy17 : ZenChessProxyBase { inventorySlot = "ZenChess48"; };
	class ProxyZenChessProxy18 : ZenChessProxyBase { inventorySlot = "ZenChess47"; };
	class ProxyZenChessProxy19 : ZenChessProxyBase { inventorySlot = "ZenChess46"; };
	class ProxyZenChessProxy20 : ZenChessProxyBase { inventorySlot = "ZenChess45"; };
	class ProxyZenChessProxy21 : ZenChessProxyBase { inventorySlot = "ZenChess44"; };
	class ProxyZenChessProxy22 : ZenChessProxyBase { inventorySlot = "ZenChess43"; };
	class ProxyZenChessProxy23 : ZenChessProxyBase { inventorySlot = "ZenChess42"; };
	class ProxyZenChessProxy24 : ZenChessProxyBase { inventorySlot = "ZenChess41"; };
	class ProxyZenChessProxy25 : ZenChessProxyBase { inventorySlot = "ZenChess40"; };
	class ProxyZenChessProxy26 : ZenChessProxyBase { inventorySlot = "ZenChess39"; };
	class ProxyZenChessProxy27 : ZenChessProxyBase { inventorySlot = "ZenChess38"; };
	class ProxyZenChessProxy28 : ZenChessProxyBase { inventorySlot = "ZenChess37"; };
	class ProxyZenChessProxy29 : ZenChessProxyBase { inventorySlot = "ZenChess36"; };
	class ProxyZenChessProxy30 : ZenChessProxyBase { inventorySlot = "ZenChess35"; };
	class ProxyZenChessProxy31 : ZenChessProxyBase { inventorySlot = "ZenChess34"; };
	class ProxyZenChessProxy32 : ZenChessProxyBase { inventorySlot = "ZenChess33"; };
	class ProxyZenChessProxy33 : ZenChessProxyBase { inventorySlot = "ZenChess32"; };
	class ProxyZenChessProxy34 : ZenChessProxyBase { inventorySlot = "ZenChess31"; };
	class ProxyZenChessProxy35 : ZenChessProxyBase { inventorySlot = "ZenChess30"; };
	class ProxyZenChessProxy36 : ZenChessProxyBase { inventorySlot = "ZenChess29"; };
	class ProxyZenChessProxy37 : ZenChessProxyBase { inventorySlot = "ZenChess28"; };
	class ProxyZenChessProxy38 : ZenChessProxyBase { inventorySlot = "ZenChess27"; };
	class ProxyZenChessProxy39 : ZenChessProxyBase { inventorySlot = "ZenChess26"; };
	class ProxyZenChessProxy40 : ZenChessProxyBase { inventorySlot = "ZenChess25"; };
	class ProxyZenChessProxy41 : ZenChessProxyBase { inventorySlot = "ZenChess24"; };
	class ProxyZenChessProxy42 : ZenChessProxyBase { inventorySlot = "ZenChess23"; };
	class ProxyZenChessProxy43 : ZenChessProxyBase { inventorySlot = "ZenChess22"; };
	class ProxyZenChessProxy44 : ZenChessProxyBase { inventorySlot = "ZenChess21"; };
	class ProxyZenChessProxy45 : ZenChessProxyBase { inventorySlot = "ZenChess20"; };
	class ProxyZenChessProxy46 : ZenChessProxyBase { inventorySlot = "ZenChess19"; };
	class ProxyZenChessProxy47 : ZenChessProxyBase { inventorySlot = "ZenChess18"; };
	class ProxyZenChessProxy48 : ZenChessProxyBase { inventorySlot = "ZenChess17"; };
	class ProxyZenChessProxy49 : ZenChessProxyBase { inventorySlot = "ZenChess16"; };
	class ProxyZenChessProxy50 : ZenChessProxyBase { inventorySlot = "ZenChess15"; };
	class ProxyZenChessProxy51 : ZenChessProxyBase { inventorySlot = "ZenChess14"; };
	class ProxyZenChessProxy52 : ZenChessProxyBase { inventorySlot = "ZenChess13"; };
	class ProxyZenChessProxy53 : ZenChessProxyBase { inventorySlot = "ZenChess12"; };
	class ProxyZenChessProxy54 : ZenChessProxyBase { inventorySlot = "ZenChess11"; };
	class ProxyZenChessProxy55 : ZenChessProxyBase { inventorySlot = "ZenChess10"; };
	class ProxyZenChessProxy56 : ZenChessProxyBase { inventorySlot = "ZenChess9";  };
	class ProxyZenChessProxy57 : ZenChessProxyBase { inventorySlot = "ZenChess8";  };
	class ProxyZenChessProxy58 : ZenChessProxyBase { inventorySlot = "ZenChess7";  };
	class ProxyZenChessProxy59 : ZenChessProxyBase { inventorySlot = "ZenChess6";  };
	class ProxyZenChessProxy60 : ZenChessProxyBase { inventorySlot = "ZenChess5";  };
	class ProxyZenChessProxy61 : ZenChessProxyBase { inventorySlot = "ZenChess4";  };
	class ProxyZenChessProxy62 : ZenChessProxyBase { inventorySlot = "ZenChess3";  };
	class ProxyZenChessProxy63 : ZenChessProxyBase { inventorySlot = "ZenChess2";  };
	class ProxyZenChessProxy64 : ZenChessProxyBase { inventorySlot = "ZenChess1";  };
};

class CfgSoundSets
{
	class ZenChess_SoundSet { soundShaders[] = { "ZenChess_SoundShader" }; volumeFactor = 1.0; };
}

class CfgSoundShaders
{
	class ZenChess_SoundShader_Base
	{
		samples[] = {};
		frequency = 1;
		range = 5;
		volume = 5;
	};

	class ZenChess_SoundShader : ZenChess_SoundShader_Base
	{ 
		samples[] = 
		{ 
			{ "ZenChess\data\sounds\chess1", 1 },
			{ "ZenChess\data\sounds\chess2", 1 },
			{ "ZenChess\data\sounds\chess3", 1 },
			{ "ZenChess\data\sounds\chess4", 1 },
			{ "ZenChess\data\sounds\chess5", 1 },
			{ "ZenChess\data\sounds\chess6", 1 }
		}; 
	};
}
