/* contains basic macros to facilitate ruby 1.8 and ruby 1.9 compatibility */

#ifndef GUARD_COMPAT_H
#define GUARD_COMPAT_H

#include <ruby.h>
#include <ruby/version.h>

/* macros for backwards compatibility with 1.8 */
#ifndef RCLASS_M_TBL
# define RCLASS_M_TBL(c) (RCLASS(c)->m_tbl)
#endif

#ifndef RCLASS_SUPER
# define RCLASS_SUPER(c) (RCLASS(c)->super)
#endif

#ifndef RCLASS_IV_TBL
# define RCLASS_IV_TBL(c) (RCLASS(c)->iv_tbl)
#endif

#if RUBY_API_VERSION_MAJOR <= 1 || (RUBY_API_VERSION_MAJOR == 2 && RUBY_API_VERSION_MINOR == 0)
#define KLASS_OF(c) (RBASIC(c)->klass)
#endif

#endif
