# Mission Module Audit (MCC4 + NR6 focus)

## What was verified

The mission currently loads both MCC and NR6 ecosystems (from mission metadata/addons):
- `mcc_sandbox`
- `mcc_sandbox_curatorExp`
- `NR6_HAL`
- `NR6_ZBE_CACHE`
- `NR6_Tools`
- `NR6_Reinforcements`

This combination can cause heavy AI/scheduler spikes when many groups are active and map/RTS interfaces are opened.

## Main risk points

1. **MCC + NR6 + many spawned groups**
   - Both systems may evaluate group state frequently.
   - Extra stress appears when RTS/map overlays are open and unit counts are high.

2. **Heavy object-init scripts in mission composition**
   - Some placed objects run large UI/event scripts (EachFrame/Draw handlers, map draw logic).
   - These can amplify stutter while RTS or map control is active.

## Recommended module usage rules

1. Keep **one primary commander brain**:
   - If using MCC RTS for command, reduce NR6 strategic automation scope (fewer active HAL commanders/areas).

2. Keep caching active:
   - `NR6_ZBE_CACHE` should remain enabled for distant AI.

3. Avoid global map/RTS draw features for all clients:
   - Restrict map-heavy displays to commander role only.

4. Keep curator/editor helper systems server/curator-only where possible.

## Script added in this optimization pass

A dedicated server script was added:
- `rtsPerfManager.sqf`

What it does:
- Enables dynamic simulation system.
- Applies practical dynamic simulation distances for groups/vehicles/props.
- Periodically auto-registers newly spawned non-player units/vehicles for dynamic simulation.

Why this helps:
- Lowers active AI simulation load while players are in RTS/map views.
- Smooths scheduler pressure spikes from mass AI + command systems.
