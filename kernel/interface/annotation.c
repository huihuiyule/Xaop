/*
 +----------------------------------------------------------------------+
 | Extreme AOP extension for PHP 7                                      |
 +----------------------------------------------------------------------+
 | Copyright (c) 1997-2018 The PHP Group                                |
 +----------------------------------------------------------------------+
 | This source file is subject to version 3.01 of the PHP license,      |
 | that is bundled with this package in the file LICENSE, and is        |
 | available through the world-wide-web at the following url:           |
 | http://www.php.net/license/3_01.txt                                  |
 | If you did not receive a copy of the PHP license and are unable to   |
 | obtain it through the world-wide-web, please send a note to          |
 | license@php.net so we can mail you a copy immediately.               |
 +----------------------------------------------------------------------+
 | Author: Josin https://www.supjos.cn                                  |
 +----------------------------------------------------------------------+
 */
#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"
#include "php_xaop.h"
#include "kernel/interface/annotation.h"

ZEND_BEGIN_ARG_INFO_EX(ARG_INFO(annotation_input), 0, 0, 2)
   ZEND_ARG_INFO(0, object)
   ZEND_ARG_INFO(0, annotations)
ZEND_END_ARG_INFO()


XAOP_METHOD(Annotation, input)
{

}

XAOP_FUNCTIONS(annotation)
    XAOP_AB_ME(Annotation, input, arginfo_annotation_input)
XAOP_FUNCTIONS_END()

XAOP_INIT(annotation)
{
    zend_class_entry ce;
    INIT_CLASS_ENTRY(ce, XAOP_PREFIX "Annotations", annotation_functions);
    annotation_ce = zend_register_internal_interface(&ce);
}


/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
