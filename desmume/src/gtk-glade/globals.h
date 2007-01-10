/* globals.h - this file is part of DeSmuME
 *
 * Copyright (C) 2007 Damien Nozay (damdoum)
 * Author: damdoum at users.sourceforge.net
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef __GLOBALS_H__
#define __GLOBALS_H__

#define GTK

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libgen.h>
#include <unistd.h>

#include <SDL/SDL.h>
#include <gtk/gtk.h>
#include <gdk/gdkkeysyms.h>
#include <glade/glade.h>

#include "../MMU.h"
#include "../registers.h"
#include "../armcpu.h"
#include "../NDSSystem.h"
#include "../cflash.h"
#include "../sndsdl.h"
#include "../ctrlssdl.h"
#include "../types.h"
#include "desmume.h"

uint Frameskip;
gint Keypad_Config[DESMUME_NB_KEYS];
gint Keypad_Temp[DESMUME_NB_KEYS];

/* main.c */
GtkWidget * pWindow;
GtkWidget * pDrawingArea;
GtkWidget * pDrawingArea2;
GladeXML  * xml, * xml_tools;

/* callbacks.c */
void enable_rom_features();

/* callbacks_IO.c */
int ScreenCoeff_Size;
gboolean ScreenRotate;
gboolean ScreenRight;
gboolean ScreenGap;

void black_screen ();
void edit_controls();

/* printscreen.c */
int WriteBMP(const char *filename,u16 *bmp);

/* keyvalnames.c   -see <gdk/gdkkeysyms.h>- */
char * KEYVAL_NAMES[0x10000];
char * KEYNAME(int k);
void init_keyvals();

#endif /* __GLOBALS_H__ */
