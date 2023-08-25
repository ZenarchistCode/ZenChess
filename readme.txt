What Is This?

This mod adds a craftable and fully functional chess board to the game.

Craft a chessboard by using a saw on a wooden plank.

Craft black pieces by using a knife on dark oak bark.

Craft white pieces by using a knife on light birch bark.

You play chess by moving the pieces on attachment slots, but there's nothing to stop you from cheating. So don't leave your opponent unobserved if you don't trust them not to cheat!

Credit to Mass for his MassManyItemOverhaul which is where I first saw a functional chessboard in DayZ. I stumbled across a chess 3D model on Sketchfab and wanted to make my own standalone chess mod for my server, but the inspiration to know it was possible came from Mass's work. Go check out his mod if you want a lot more than just a chess set.

Installation Instructions:

Install this mod like any other mod - copy it into your server folder and add it to your mods list. Make sure to copy the .bikey into your server keys if you're not using a server management tool like OmegaManager which does that automatically.

Make sure to merge the types.xml into your server types and adjust the item's lifetime, or the racks will despawn on server restart and/or if no players are around. The types.xml file is in the mod folder and listed below.

This mod must be installed on both the server & client.

3D Model Credits:

The chess model was free on Sketchfab under the CC Attribution license. The only modification I made was to separate all of the pieces.

Original Model: https://sketchfab.com/3d-models/wooden-chess-set-90151fb0fb294e56b45e52b001a884db

Repack & Source Code:

You can repack this mod if you like, and do anything else you want with it for that matter. The source code is on my GitHub at www.zenarchist.io

Enjoy!







Types.XML:

<?xml version="1.0" encoding="UTF-8" standalone="yes"?>
<types>
	<type name="Zen_ChessBoard">
		<nominal>3</nominal>
        <lifetime>604800</lifetime>
        <restock>0</restock>
        <min>1</min>
        <quantmin>-1</quantmin>
        <quantmax>-1</quantmax>
        <cost>100</cost>
        <flags count_in_cargo="0" count_in_hoarder="0" count_in_map="1" count_in_player="0" crafted="0" deloot="0"/>
        <category name="clothes"/>
        <tag name="shelves"/>
        <usage name="Town"/>
        <usage name="Village"/>
    </type>
	<type name="Zen_ChessWhitePawn">
        <lifetime>3600</lifetime>
        <flags count_in_cargo="0" count_in_hoarder="0" count_in_map="1" count_in_player="0" crafted="1" deloot="0"/>
    </type>
	<type name="Zen_ChessBlackPawn">
        <lifetime>3600</lifetime>
        <flags count_in_cargo="0" count_in_hoarder="0" count_in_map="1" count_in_player="0" crafted="1" deloot="0"/>
    </type>
	<type name="Zen_ChessWhiteBishop">
        <lifetime>3600</lifetime>
        <flags count_in_cargo="0" count_in_hoarder="0" count_in_map="1" count_in_player="0" crafted="1" deloot="0"/>
    </type>
	<type name="Zen_ChessBlackBishop">
        <lifetime>3600</lifetime>
        <flags count_in_cargo="0" count_in_hoarder="0" count_in_map="1" count_in_player="0" crafted="1" deloot="0"/>
    </type>
	<type name="Zen_ChessWhiteKing">
        <lifetime>3600</lifetime>
        <flags count_in_cargo="0" count_in_hoarder="0" count_in_map="1" count_in_player="0" crafted="1" deloot="0"/>
    </type>
	<type name="Zen_ChessBlackKing">
        <lifetime>3600</lifetime>
        <flags count_in_cargo="0" count_in_hoarder="0" count_in_map="1" count_in_player="0" crafted="1" deloot="0"/>
    </type>
	<type name="Zen_ChessWhiteKnight">
        <lifetime>3600</lifetime>
        <flags count_in_cargo="0" count_in_hoarder="0" count_in_map="1" count_in_player="0" crafted="1" deloot="0"/>
    </type>
	<type name="Zen_ChessBlackKnight">
        <lifetime>3600</lifetime>
        <flags count_in_cargo="0" count_in_hoarder="0" count_in_map="1" count_in_player="0" crafted="1" deloot="0"/>
    </type>
	<type name="Zen_ChessWhiteQueen">
        <lifetime>3600</lifetime>
        <flags count_in_cargo="0" count_in_hoarder="0" count_in_map="1" count_in_player="0" crafted="1" deloot="0"/>
    </type>
	<type name="Zen_ChessBlackQueen">
        <lifetime>3600</lifetime>
        <flags count_in_cargo="0" count_in_hoarder="0" count_in_map="1" count_in_player="0" crafted="1" deloot="0"/>
    </type>
	<type name="Zen_ChessWhiteRook">
        <lifetime>3600</lifetime>
        <flags count_in_cargo="0" count_in_hoarder="0" count_in_map="1" count_in_player="0" crafted="1" deloot="0"/>
    </type>
	<type name="Zen_ChessBlackRook">
        <lifetime>3600</lifetime>
        <flags count_in_cargo="0" count_in_hoarder="0" count_in_map="1" count_in_player="0" crafted="1" deloot="0"/>
    </type>
</types>