<<<<<<< HEAD:src/server/scripts/Northrend/RubySanctum/ruby_sanctum.h
/* Copyright (C) 2010 by /dev/rsa for ScriptDev2 <https://scriptdev2.svn.sourceforge.net/>
* This program is free software licensed under GPL version 2
* Please see the included DOCS/LICENSE.TXT for more information */
=======
/*
 * Copyright (C) 2008-2011 TrinityCore <http://www.trinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef RUBY_SANCTUM_H_
#define RUBY_SANCTUM_H_

#include "SpellScript.h"
#include "Map.h"
#include "Creature.h"

#define RSScriptName "instance_ruby_sanctum"
uint32 const EncounterCount = 4;

enum DataTypes
{
    // Encounter States/Boss GUIDs
    DATA_BALTHARUS_THE_WARBORN              = 0,
    DATA_GENERAL_ZARITHRIAN                 = 1,
    DATA_SAVIANA_RAGEFIRE                   = 2,
    DATA_HALION                             = 3,

    // Etc
    DATA_XERESTRASZA                        = 4,
    DATA_CRYSTAL_CHANNEL_TARGET             = 5,
    DATA_BALTHARUS_SHARED_HEALTH            = 6,
};
>>>>>>> 507dcdf5636385bde2eef3b8fa82ffe044741df1:src/server/scripts/Northrend/ChamberOfAspects/RubySanctum/ruby_sanctum.h

#ifndef DEF_RUBY_SANCTUM_H
#define DEF_RUBY_SANCTUM_H

enum
{
<<<<<<< HEAD:src/server/scripts/Northrend/RubySanctum/ruby_sanctum.h
    MAX_ENCOUNTERS		= 6,
=======
    // Baltharus the Warborn
    NPC_BALTHARUS_THE_WARBORN               = 39751,
    NPC_BALTHARUS_THE_WARBORN_CLONE         = 39899,
    NPC_BALTHARUS_TARGET                    = 26712,

    // General Zarithrian
    NPC_GENERAL_ZARITHRIAN                  = 39746,
    NPC_ONYX_FLAMECALLER                    = 39814,
    NPC_ZARITHIAN_SPAWN_STALKER             = 39794,

    // Saviana Ragefire
    NPC_SAVIANA_RAGEFIRE                    = 39747,

    // Halion
    NPC_HALION                              = 39863,
    NPC_HALION_TWILIGHT                     = 40142,
    NPC_HALION_CONTROLLER                   = 40146,
    NPC_LIVING_INFERNO                      = 40681,
    NPC_LIVING_EMBER                        = 40683,
    NPC_ORB_CARRIER                         = 40081,
    NPC_ORB_ROTATION_FOCUS                  = 40091,
    NPC_SHADOW_ORB_N                        = 40083,
    NPC_SHADOW_ORB_S                        = 40100,

    // Xerestrasza
    NPC_XERESTRASZA                         = 40429,
};
>>>>>>> 507dcdf5636385bde2eef3b8fa82ffe044741df1:src/server/scripts/Northrend/ChamberOfAspects/RubySanctum/ruby_sanctum.h

    TYPE_EVENT			= 0,
    TYPE_RAGEFIRE		= 1,
    TYPE_BALTHARUS		= 2,
    TYPE_XERESTRASZA	= 3,
    TYPE_ZARITHRIAN		= 4,
    TYPE_HALION			= 5,

    TYPE_COUNTER		= 6, // for WorldUpdateState
    TYPE_HALION_EVENT	= 7,
	COUNTER_OFF			= 255,

    TYPE_EVENT_TIMER	= 50,
    TYPE_EVENT_NPC		= 51,

    NPC_HALION_REAL		= 39863, // Halion Physical Realm NPC
    NPC_HALION_TWILIGHT	= 40142, // Halion Twilight Realm NPC
    NPC_HALION_CONTROL	= 40146,

    NPC_BALTHARUS		= 39751,
    NPC_CLONE			= 39899,
    NPC_ZARITHIAN		= 39746,
    NPC_RAGEFIRE		= 39747,

    NPC_XERESTRASZA		= 40429,

    NPC_BALTHARUS_TARGET			= 26712,
    NPC_ZARITHIAN_SPAWN_STALKER		= 39794,

    // Orb rotation
    NPC_SHADOW_PULSAR_N = 40083, //spinning orb N spawn
    NPC_SHADOW_PULSAR_S = 40100, //spinning orb S spawn
    NPC_SHADOW_PULSAR_E = 40468, //spinning orb E spawn
    NPC_SHADOW_PULSAR_W = 40469, //spinning orb W spawn
    NPC_ORB_CARRIER					= 40081,
    NPC_ORB_ROTATION_FOCUS			= 40091,


    GO_HALION_PORTAL_1				= 202794, //1327 ENTRY
    GO_HALION_PORTAL_2				= 202795, //1327 ENTRY
    GO_HALION_PORTAL_3				= 202796, //1327 EXIT

    GO_FIRE_FIELD					= 203005,
    GO_FLAME_WALLS					= 203006,
    GO_FLAME_RING					= 203007,

    DATA_EVENT_TIMER				= 101,
    DATA_EVENT						= 102,

    DATA_ORB_DIRECTION				= 110,
    DATA_ORB_S						= 111,
    DATA_ORB_N						= 112,
};

enum uiWorldStates
{
<<<<<<< HEAD:src/server/scripts/Northrend/RubySanctum/ruby_sanctum.h
    UPDATE_STATE_UI_COUNT_R			= 5050,
    UPDATE_STATE_UI_COUNT_T			= 5050,
    UPDATE_STATE_UI_SHOW			= 5051,
=======
    WORLDSTATE_UNK_1                = 5049, // Halion corporeality amount - normal phase
    WORLDSTATE_UNK_2                = 5050, // Halion corporeality amount - twilight phase
    WORLDSTATE_UNK_3                = 5051, // Halion corporeality toggle show
>>>>>>> 507dcdf5636385bde2eef3b8fa82ffe044741df1:src/server/scripts/Northrend/ChamberOfAspects/RubySanctum/ruby_sanctum.h
};

#endif
