
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

#include <fs/fs_DriveExplorer.hpp>

namespace fs {

    DriveExplorer::DriveExplorer(const UsbHsFsDevice &drive) : drv(drive) {
        GLEAF_LOG_FMT("Creating DriveExplorer with drive '%s' / '%s' / '%s'", drive.name, drive.product_name, drive.manufacturer);
        this->SetNames(drive::GetDriveMountName(drive), drive::FormatDriveName(drive));
    }

}
