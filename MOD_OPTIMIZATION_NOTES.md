# UCS2 Modlist Optimization Notes (Script-Lag Focus)

This is a **non-destructive optimization pass** against `UCS2ModList.html` for multiplayer mission performance.

## High-impact overlap/redundancy candidates

These sets likely duplicate behavior and can cause extra scheduled-script load, event-handler spam, or AI overhead.

1. **View distance managers (keep only one):**
   - `Auto ViewDistance`
   - `CH View Distance`
   - `Dynamic View Distance`

2. **Movement/animation overhauls (trim aggressively):**
   - `Adjustable Walk Speed - Rework`
   - `Alternative Running`
   - `Animated Grenade Throwing`
   - `Expanded Actions and Vehicle Animations`
   - `Ladder Tweak Remastered`
   - `Swim Faster`
   - `Tactical Slide Kozak Edit`
   - `Tactical Position Ready`
   - `Weightless Speed Stamina`
   - `Deadfast's Third Person View - MGS V Style Camera`

3. **Rope / rappelling / sling / towing chain (keep only what mission needs):**
   - `Advanced Pickup Rope`
   - `Advanced Rappelling - Reworked`
   - `Advanced Urban Rapelling v2 (remade)`
   - `Advanced Sling Loading`
   - `Advanced Towing`

4. **AI behavior stacks (avoid stacking too many global AI mods):**
   - `Fast Reaction AI - FRAI`
   - `Drongo's Better AI Gunners`
   - `LAMBS_Danger.fsm`
   - `LAMBS_RPG`
   - `LAMBS_Suppression`
   - `LAMBS_Turrets`
   - `NR6 PACK - HAL Evolved`
   - `PHEN Automated RHQ (NR6 PACK - HAL Evolved)`

5. **Effect-heavy visual/audio bundles (trim for server + client frametime):**
   - `Enhanced Soundscape` + `Enhanced Soundscape Plus`
   - `Project SFX: Footsteps` + `Project SFX: Remastered` + `Project SFX: Voicelines`
   - `Some Effects Rework:*` packs
   - `Reactive Building Effects PLUS`
   - `Weather Plus` + `Enhanced Weather + Clouds Mod v2.1`

6. **Zeus/editor-only utilities (move to curator profile only):**
   - `Bucket - Zeus Terrain Editor`
   - `Snapping for Eden and Zeus`
   - `ZEC - Zeus and Eden Templates / Building Compositions`
   - `ZECCUP - Zeus and Eden Templates for CUP Terrains`
   - `ZEI - Zeus and Eden Interiors ( Continued )`
   - `ZEIC - Zeus and Eden Interior Community Version`
   - `Zeus Framerate Monitor Rework`

## Recommended practical baseline

For MP stability, split into profiles:

- **Server required:** framework + factions + map + mission core (`CBA_A3`, terrain/map mods, CUP dependencies, Ravage/VA dependencies, mission-required scripted systems).
- **Client required:** only gameplay-critical compatibility/UI.
- **Optional client pack:** cosmetic/effects/movement mods.
- **Curator-only pack:** Zeus/editor composition mods.

## Mission-script interplay note

The side-switch logic in `init.sqf` now runs server-side only, so conflicting stamina/movement mods should be reduced to one pack to prevent repeated state flips and unnecessary event work.
