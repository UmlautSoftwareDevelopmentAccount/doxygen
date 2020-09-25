// objective: test req command
// check: 087__req_8cpp.xml
// config: REQ_PREFIX = "COMMON:COMMON_EXPANDED_ SYS:SYS_EXPANDED_ SW:SW_EXPANDED_"
// config: REQ_PROVIDER = req_provider

/**
 * @file 087_req.cpp
 * @req{FILE_LEVEL}
 * @req{COMMON:FILE_LEVEL_COMMON, SYS:FILE_LEVEL_SYS, FILE_LEVEL_NO_PREFIX}
 *
 * @{
 */

/**
 * Foo function.
 *
 * @req{REQ_FUNCTION}
 * @req{REQ_FUNCTION_SEQ,SYS:REQ_FUNCTION_SEQ_PREFIXED}
 */
void foo()
{
  int i; //! @req{REQ_VAR_FIRST, REQ_VAR_LEADING_SPACE,REQ_VAR_TRAILING_SPACE  }
  int j; /** \req{COMMON:REQ_VAR_PREFIXED} */
}

//! \req{SYS:CLASS_A}
class A
{
    /** \req{SYS:CLASS_MEMBER_PREFIXED,:CLASS_MEMBER_NO_LABEL} */
    int i;
};

/** @req{NO_REQ_STRING:} */
enum E
{
  X /**< @req{SW:ENUM_X} */
, Y /**< @req{:MISSING_LABEL} */
};

/** @} */

