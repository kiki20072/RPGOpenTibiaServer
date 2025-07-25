////////////////////////////////////////////////////////////////////////
// Crystal Server - an opensource roleplaying game
////////////////////////////////////////////////////////////////////////
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
////////////////////////////////////////////////////////////////////////

#pragma once

class GameFunctions {
public:
	static void init(lua_State* L);

private:
	static int luaGameCreateMonsterType(lua_State* L);
	static int luaGameCreateNpcType(lua_State* L);

	static int luaGameGetSpectators(lua_State* L);

	static int luaGameGetBoostedCreature(lua_State* L);
	static int luaGameGetBestiaryList(lua_State* L);

	static int luaGameGetPlayers(lua_State* L);
	static int luaGameLoadMap(lua_State* L);
	static int luaGameloadMapChunk(lua_State* L);

	static int luaGameGetExperienceForLevel(lua_State* L);
	static int luaGameGetMonsterCount(lua_State* L);
	static int luaGameGetPlayerCount(lua_State* L);
	static int luaGameGetNpcCount(lua_State* L);
	static int luaGameGetMonsterTypes(lua_State* L);

	static int luaGameGetTowns(lua_State* L);
	static int luaGameGetHouses(lua_State* L);

	static int luaGameGetGameState(lua_State* L);
	static int luaGameSetGameState(lua_State* L);

	static int luaGameGetWorldType(lua_State* L);
	static int luaGameSetWorldType(lua_State* L);

	static int luaGameGetReturnMessage(lua_State* L);

	static int luaGameCreateItem(lua_State* L);
	static int luaGameCreateContainer(lua_State* L);
	static int luaGameCreateMonster(lua_State* L);
	static int luaGameCreateSoulPitMonster(lua_State* L);
	static int luaGameGenerateNpc(lua_State* L);
	static int luaGameCreateNpc(lua_State* L);
	static int luaGameCreateTile(lua_State* L);

	static int luaGameGetBestiaryCharm(lua_State* L);
	static int luaGameCreateBestiaryCharm(lua_State* L);

	static int luaGameCreateItemClassification(lua_State* L);

	static int luaGameStartRaid(lua_State* L);

	static int luaGameGetClientVersion(lua_State* L);

	static int luaGameReload(lua_State* L);

	static int luaGameGetOfflinePlayer(lua_State* L);
	static int luaGameGetNormalizedPlayerName(lua_State* L);
	static int luaGameGetNormalizedGuildName(lua_State* L);
	static int luaGameHasEffect(lua_State* L);
	static int luaGameHasDistanceEffect(lua_State* L);

	static int luaGameAddInfluencedMonster(lua_State* L);
	static int luaGameRemoveInfluencedMonster(lua_State* L);
	static int luaGameGetInfluencedMonsters(lua_State* L);
	static int luaGameMakeFiendishMonster(lua_State* L);
	static int luaGameRemoveFiendishMonster(lua_State* L);
	static int luaGameGetFiendishMonsters(lua_State* L);

	static int luaGameGetBoostedBoss(lua_State* L);

	static int luaGameGetLadderIds(lua_State* L);
	static int luaGameGetDummies(lua_State* L);

	static int luaGameGetTalkActions(lua_State* L);
	static int luaGameGetEventCallbacks(lua_State* L);

	static int luaGameRegisterAchievement(lua_State* L);
	static int luaGameGetAchievementInfoById(lua_State* L);
	static int luaGameGetAchievementInfoByName(lua_State* L);
	static int luaGameGetSecretAchievements(lua_State* L);
	static int luaGameGetPublicAchievements(lua_State* L);
	static int luaGameGetAchievements(lua_State* L);

	static int luaGameGetSoulCoreItems(lua_State* L);
	static int luaGameGetMonstersByRace(lua_State* L);
	static int luaGameGetMonstersByBestiaryStars(lua_State* L);

	static int luaGameGetTitleByName(lua_State* L);
};
