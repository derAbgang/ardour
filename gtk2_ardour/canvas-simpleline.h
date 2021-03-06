/* libgnomecanvas/gnome-canvas-simpleline.h: GnomeCanvas item for simple rects
 *
 * Copyright (C) 2001 Paul Davis <pbd@op.net>
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
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 */

#ifndef __GNOME_CANVAS_SIMPLELINE_H__
#define __GNOME_CANVAS_SIMPLELINE_H__

#include <stdint.h>

#include <libgnomecanvas/libgnomecanvas.h>

G_BEGIN_DECLS

/* Wave viewer item for canvas.
 */

#define GNOME_TYPE_CANVAS_SIMPLELINE                   (gnome_canvas_simpleline_get_type ())
#define GNOME_CANVAS_SIMPLELINE(obj)                   (GTK_CHECK_CAST ((obj), GNOME_TYPE_CANVAS_SIMPLELINE, GnomeCanvasSimpleLine))
#define GNOME_CANVAS_SIMPLELINE_CLASS(klass)           (GTK_CHECK_CLASS_CAST ((klass), GNOME_TYPE_CANVAS_SIMPLELINE, GnomeCanvasSimpleLineClass))
#define GNOME_IS_CANVAS_SIMPLELINE(obj)         (GTK_CHECK_TYPE ((obj), GNOME_TYPE_CANVAS_SIMPLELINE))
#define GNOME_IS_CANVAS_SIMPLELINE_CLASS(klass) (GTK_CHECK_CLASS_TYPE ((klass), GNOME_TYPE_CANVAS_SIMPLELINE))
#define GNOME_CANVAS_SIMPLELINE_GET_CLASS(obj)         (GTK_CHECK_GET_CLASS ((obj), GNOME_TYPE_CANVAS_SIMPLELINE, GnomeCanvasSimpleLineClass))

typedef struct _GnomeCanvasSimpleLine            GnomeCanvasSimpleLine;
typedef struct _GnomeCanvasSimpleLineClass       GnomeCanvasSimpleLineClass;

struct _GnomeCanvasSimpleLine
{
    GnomeCanvasItem item;
    double x1, y1, x2, y2;  /* parent-relative, world coordinates */
    gint32 cx1, cy1, cx2, cy2;  /* global, canvas coordinates */
    uint32_t color;

    /* cached values set during update/used during render */

    unsigned char r, b, g, a;
};

struct _GnomeCanvasSimpleLineClass {
	GnomeCanvasItemClass parent_class;
};

GType gnome_canvas_simpleline_get_type (void) G_GNUC_CONST;

G_END_DECLS

#endif /* __GNOME_CANVAS_SIMPLELINE_H__ */
