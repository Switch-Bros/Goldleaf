
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
#include <ui/ui_Includes.hpp>

namespace ui {

    class SettingsLayout : public pu::ui::Layout {
        private:
            pu::ui::elm::Menu::Ref options_menu;
            pu::ui::elm::ProgressBar::Ref fw_export_p_bar;

            void OnInput(const u64 keys_down, const u64 keys_up, const u64 keys_held, const pu::ui::TouchPoint touch_pos);
        public:
            SettingsLayout();
            PU_SMART_CTOR(SettingsLayout)

            void ExportUpdateToDirectory(const std::string &fw_path, const SetSysFirmwareVersion &fw_ver);
            void HandleUpdate(const std::string &fw_path_base, const SetSysFirmwareVersion &fw_ver);
            void optsConfig_DefaultKey();
            void optsFirmware_DefaultKey();
            void optsMemory_DefaultKey();

            void Load();
    };

}
