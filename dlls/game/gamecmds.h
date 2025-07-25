//-----------------------------------------------------------------------------
//
//  $Logfile:: /Code/DLLs/game/gamecmds.h                                    $
// $Revision:: 24                                                             $
//     $Date:: 10/13/03 8:54a                                                 $
//
// Copyright (C) 1999 by Ritual Entertainment, Inc.
// All rights reserved.
//
// This source is may not be distributed and/or modified without
// expressly written permission by Ritual Entertainment, Inc.
//
//
// DESCRIPTION:
//

#ifndef __GAMECMDS_H__
#define __GAMECMDS_H__

#include "g_local.h"

extern "C" void      G_ClientCommand( gentity_t *ent );
extern "C" qboolean  G_ConsoleCommand( void );

void     G_InitConsoleCommands( void );

qboolean G_ProcessClientCommand( gentity_t *ent );



#ifdef ENABLE_COOP
//--------------------------------------------------------------
// COOP Generation 7.000 - Added: coop console command specific functions - chrissstrahl
//--------------------------------------------------------------
qboolean coop_playerCoopDetected(const gentity_t* ent);
qboolean coop_playerClientId(const gentity_t* ent);
qboolean coop_playerThread(const gentity_t* ent);
qboolean coop_playerInput(const gentity_t* ent);
qboolean coop_playerTestSpawn(const gentity_t* ent);
qboolean coop_playerRadarScale(const gentity_t* ent);
qboolean coop_playerFollowMe(const gentity_t* ent);
qboolean coop_playerLeader(const gentity_t* ent);
qboolean coop_playerLogin(const gentity_t* ent);
qboolean coop_playerLogout(const gentity_t* ent);
qboolean coop_playerKill(const gentity_t* ent);
qboolean coop_playerOrigin(const gentity_t* ent);
qboolean coop_playerNoclip(const gentity_t* ent);
qboolean coop_playerStuck(const gentity_t* ent);
qboolean coop_playerTransport(const gentity_t* ent);
qboolean coop_playerNotransport(const gentity_t* ent);
qboolean coop_playerShowspawn(const gentity_t* ent);
qboolean coop_playerTransferlife(const gentity_t* ent);
qboolean coop_playerAbility(const gentity_t* ent);
qboolean coop_playerTargetnames(const gentity_t* ent);
qboolean coop_playerLevelend(const gentity_t* ent);
qboolean coop_playerDrop(const gentity_t* ent);
qboolean coop_playerSkill(const gentity_t* ent);
qboolean coop_playerInfo(const gentity_t* ent);
qboolean coop_playerBlock(const gentity_t* ent);
qboolean coop_playerMapname(const gentity_t* ent);
qboolean coop_playerClass(const gentity_t* ent);
#endif


void     G_Say( const gentity_t *ent, bool team, qboolean arg0 );
qboolean G_CameraCmd( const gentity_t *ent );
qboolean G_SoundCmd( const gentity_t *ent );
qboolean G_CinematicCmd( const gentity_t *ent );
qboolean G_VTaunt( const gentity_t *ent ); // BOTLIB
qboolean G_SayCmd( const gentity_t *ent );
qboolean G_TellCmd( const gentity_t *ent );
qboolean G_TauntCmd( const gentity_t *ent );
qboolean G_TeamSayCmd( const gentity_t *ent );
qboolean G_LocCmd( const gentity_t *ent );
qboolean G_WarpCmd( const gentity_t *ent );
qboolean G_MaskCmd( const gentity_t *ent );
qboolean G_EventListCmd( const gentity_t *ent );
qboolean G_PendingEventsCmd( const gentity_t *ent );
qboolean G_EventHelpCmd( const gentity_t *ent );
qboolean G_DumpEventsCmd( const gentity_t *ent );
qboolean G_ClassEventsCmd( const gentity_t *ent );
qboolean G_DumpClassEventsCmd( const gentity_t *ent );
qboolean G_DumpAllClassesCmd( const gentity_t *ent );
qboolean G_ClassListCmd( const gentity_t *ent );
qboolean G_ClassTreeCmd( const gentity_t *ent );
qboolean G_ShowVarCmd( const gentity_t *ent );
qboolean G_RestartCmd( const gentity_t *ent );
qboolean G_ScriptCmd( const gentity_t *ent );
qboolean G_ClientRunThreadCmd( const gentity_t *ent );
qboolean G_ClientSetVarCmd( const gentity_t *ent );
qboolean G_LevelVarsCmd( const gentity_t *ent );
qboolean G_GameVarsCmd( const gentity_t *ent );
qboolean G_SendCommandToAllPlayers( const char *command );
qboolean G_SendCommandToPlayer( const gentity_t *ent, const char *command );
qboolean G_EnableWidgetOfPlayer( const gentity_t *ent, const char *widgetName, qboolean enableFlag );
qboolean G_SetWidgetTextOfPlayer( const gentity_t *ent, const char *widgetName, const char *widgetText );
qboolean G_SetGameplayFloatCmd( const gentity_t *ent );
qboolean G_SetGameplayStringCmd( const gentity_t *ent );
qboolean G_PurchaseSkillCmd( const gentity_t *ent );
qboolean G_SwapItemCmd( const gentity_t *ent );
qboolean G_DropItemCmd( const gentity_t *ent );
qboolean G_DialogRunThread( const gentity_t *ent );

#endif /* !__GAMECMDS_H__ */
