{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fswiss\fcharset0 Arial;}}
{\*\generator Msftedit 5.41.15.1515;}\viewkind4\uc1\pard\f0\fs20 //###########################################\par
//  yourmom Scripted                          #\par
//  By Slade1000                              #\par
//###########################################\par
\par
#include "StdAfx.h"\par
#include "Setup.h"\par
#include "Base.h"\par
\par
// Boss\par
#define yourmom\tab  652343\par
\par
// Spells\par
#define spiritbolts 43383\par
#define wellfed 44101\par
#define slam 52058\par
#define chockingcloud 58965\par
#define decimate 28374\par
#define felcleave 38742\par
#define shadowbolt 47809\par
\par
\par
\par
class yourmomAI : public ArcScriptBossAI\par
\{\par
    ARCSCRIPT_FACTORY_FUNCTION(yourmomAI, ArcScriptBossAI);\par
\tab yourmomAI(Creature* pCreature) : ArcScriptBossAI(pCreature)\par
\tab\{\par
\tab\tab AddSpell(felcleave, Target_Current, 15, 0, 10);\par
\tab\tab Addspell(shadowbolt, Target_RandomPlayer, 15, 0, 10);\par
\tab\tab\par
\tab\tab\par
\tab     AddEmote(Event_OnCombatStart, "Im will always love you ", Text_Yell);\par
\tab\tab AddEmote(Event_OnTargetDied, "why me", Text_Yell);\par
\tab\tab AddEmote(Event_OnTargetDied, "no no did i beat you to hard", Text_Yell);\par
\tab\tab AddEmote(Event_OnDied, "Its your fathers fault", Text_Yell);\par
\tab   \}\par
 \par
\tab void AIUpdate()\par
\tab\{\par
if(GetHealthPercent()<=100)  // Phase one\par
\tab\{\par
\tab      AddSpell(wellfed, Target_RandomPlayer, 100, 0, 30, 0, 0, false, "you look hungary dear here have some food", Text_Yell);\par
        \}       \par
\tab   if(GetHealthPercent()<=70) // Phase 2\par
\tab\{\par
\tab\tab AddSpell(chockingcloud, Target_SecondMostHated, 100, 0, 100, 0,0, false, "oops dear burned the food", Text_Yell);\par
\tab\}\par
\tab    if(GetHealthPercent()<=40) // Phase 2\par
\tab\{\par
\tab\tab AddSpell(spiritbolts, Target_ClosestPlayer, 100, 0, 100, 0,0, false, "Ahh now im getting Agrivated its ok you were always a notty child", Text_Yell);\par
\tab\}\par
\tab     if(GetHealthPercent()<=3) // Phase 2\par
\tab\{\par
\tab\tab AddSpell(decimate, Target_RandomPlayer, 100, 0, 100, 0,0, false, "I will always love you but you need a spanking", Text_Yell);\par
\tab\}\par
\tab      ParentClass::AIUpdate();     \par
             ParentClass::AIUpdate();\par
             ParentClass::AIUpdate();     \par
             ParentClass::AIUpdate();\par
\par
\tab\}\par
\};\par
\par
\par
void Setupyourmom(ScriptMgr* pScriptMgr)\par
\{\par
\tab pScriptMgr->register_creature_script(yourmom, &yourmomAI::Create);\par
\tab\par
\}\par
}
 