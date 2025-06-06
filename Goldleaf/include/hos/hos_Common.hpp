
/*

    Goldleaf - Multipurpose homebrew tool for Nintendo Switch
    Copyright © 2018-2025 XorTroll

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

*/

#pragma once
#include <base.hpp>

namespace hos {

    u32 GetBatteryLevel();
    bool IsCharging();

    std::string GetCurrentTime(const bool use_12h_time);

    void LockExit();
    void UnlockExit();
    bool IsExitLocked();

    u8 GetSystemKeyGeneration();
    std::string GetKeyGenerationRange(const u8 key_gen);

    Result PerformShutdown(const bool do_reboot);

    inline Result PowerOff() {
        return PerformShutdown(false);
    }
    
    inline Result Reboot() {
        return PerformShutdown(true);
    }

}
