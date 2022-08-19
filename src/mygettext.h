/* -*- C -*- */
/* gettext.h */
/* erzeugt Mittwoch, 17. August 2022 15:59 (C) 2022 von Leander Jedamus */
/* modifiziert Mittwoch, 17. August 2022 17:31 von Leander Jedamus */

#ifndef MYGETTEXT_H
#define MYGETTEXT_H 1

#include <libintl.h>
#include "gettext.h"

#define _(string) gettext (string)

#endif /* GETTEXT_H */

/* vim:set cindent ai sw=2 */