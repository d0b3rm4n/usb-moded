/**
  @file usb_moded-modesetting.h
 
  Copyright (C) 2010 Nokia Corporation. All rights reserved.

  @author: Philippe De Swert <philippe.de-swert@nokia.com>

  This program is free software; you can redistribute it and/or
  modify it under the terms of the Lesser GNU General Public License 
  version 2 as published by the Free Software Foundation. 

  This program is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  General Public License for more details.
 
  You should have received a copy of the Lesser GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
  02110-1301 USA
*/

#include "usb_moded-dyn-config.h"

#ifdef MAYBE_NEEDED
int find_number_of_mounts(void);
#endif
int write_to_file(const char *path, const char *text);
int set_mass_storage_mode(void);
int set_ovi_suite_mode(void);
int set_mtp_mode(void);
int set_dynamic_mode(struct mode_list_elem *data);
/* clean up for the mode changes on disconnect */
int usb_moded_mode_cleanup(const char *module);
#ifdef NOKIA
gboolean export_cdrom (gpointer data);
#endif

