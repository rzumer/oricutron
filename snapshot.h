/*
**  Oricutron
**  Copyright (C) 2009-2014 Peter Gordon
**
**  This program is free software; you can redistribute it and/or
**  modify it under the terms of the GNU General Public License
**  as published by the Free Software Foundation, version 2
**  of the License.
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with this program; if not, write to the Free Software
**  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
**
**  Snapshot saving & loading
**
*/

#ifndef SNAPSHOT_H
#define SNAPSHOT_H

SDL_bool save_snapshot(struct machine *oric, char *filename);
SDL_bool load_snapshot(struct machine *oric, char *filename);

#endif /* SNAPSHOT_H */
