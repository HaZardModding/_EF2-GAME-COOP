// Copyright (C) 1999-2000 Id Software, Inc.
//

/*****************************************************************************
 * name:		ai_team.h
 *
 * desc:		Quake3 bot AI
 *
 * $Archive: /Code/DLLs/game/ai_team.h $
 * $Author: Jwaters $ 
 * $Revision: 1 $
 * $Modtime: 7/25/02 11:48a $
 * $Date: 7/30/02 1:10p $
 *
 *****************************************************************************/

void BotTeamAI(bot_state_t *bs);
int BotGetTeamMateTaskPreference(bot_state_t *bs, int teammate);
void BotSetTeamMateTaskPreference(bot_state_t *bs, int teammate, int preference);


//--------------------------------------------------------------
// GAMEFIX - Fixed: warning: ISO C++ forbids converting a string constant to char * [-Wwrite - strings] for BotRandomWeaponName - chrissstrahl
//--------------------------------------------------------------
void BotVoiceChat(bot_state_t *bs, int toclient, const char *voicechat);
void BotVoiceChatOnly(bot_state_t *bs, int toclient, const char *voicechat);


