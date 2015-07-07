/* Pinos
 * Copyright (C) 2015 Wim Taymans <wim.taymans@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef __PINOS_H__
#define __PINOS_H__

#include <client/stream.h>
#include <client/context.h>
#include <client/subscribe.h>
#include <client/introspect.h>

#define PINOS_DBUS_SERVICE "org.pinos"
#define PINOS_DBUS_OBJECT_PREFIX "/org/pinos"
#define PINOS_DBUS_OBJECT_SERVER PINOS_DBUS_OBJECT_PREFIX "/server"
#define PINOS_DBUS_OBJECT_SOURCE PINOS_DBUS_OBJECT_PREFIX "/source"
#define PINOS_DBUS_OBJECT_CLIENT PINOS_DBUS_OBJECT_PREFIX "/client"

void pinos_init (int *argc, char **argv[]);

#endif /* __PINOS_H__ */