{% include "license.txt" %}
#ifndef QTAWS_{{ClassName|upper}}_P_H
#define QTAWS_{{ClassName|upper}}_P_H

#include <QtGlobal>

namespace QtAws {
namespace {{NameSpaceName}} {

class {{ClassName}};

class {{ClassName}}Private {

public:
    explicit {{ClassName}}Private({{ClassName}} * const q);

protected:
    {{ClassName}} * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC({{ClassName}})
    Q_DISABLE_COPY({{ClassName}}Private)

};

} // namespace {{NameSpaceName}}
} // namespace QtAws

#endif
