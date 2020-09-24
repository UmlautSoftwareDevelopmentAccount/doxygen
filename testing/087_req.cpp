// objective: test req command
// check: 087__req_8cpp.xml
// config: REQ_PREFIX = "COMMON:COMMON_EXPANDED_ SYS:SYS_EXPANDED_ SW:SW_EXPANDED_"
// config: REQ_PROVIDER = req_provider

/**
 * @file 087_req.cpp
 * @req FILE_LEVEL
 * @req {COMMON:FILE_LEVEL_COMMON, SYS:FILE_LEVEL_SYS, FILE_LEVEL}
 *
 * @{
 */

/**
 * Foo function.
 *
 * @req {REQ_FUNCTION_SINGLE_BRACES}
 * @req REQ_FUNCTION_SINGLE_NO_BRACES
 * @req{REQ_FUNCTION_MULTIPLE_1,REQ_FUNCTION_MULTIPLE_2}
 */
void foo()
{
  int i; //! @req{REQ_VAR_FIRST, REQ_VAR_LEADING_SPACE,REQ_VAR_TRAILING_SPACE  }
  int j; /** @req REQ_VAR_NO_BRACES */
}

//! \req{SYS:CLASS_A}
class A
{
};

/** @req{NO_REQ_STRING:} */
enum E
{
  X /**< @req{SW:ENUM_X} */
, Y /**< @req{:MISSING_LABEL} */
};

/** @} */

