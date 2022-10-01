// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

{% with service.canonicalId as ServiceName %}
{% with operation.name|add:"Request" as ClassName %}
#ifndef QTAWS_{{ClassName|upper}}_P_H
#define QTAWS_{{ClassName|upper}}_P_H

#include "{{ServiceName|lower}}request_p.h"
#include "{{ClassName|lower}}.h"

namespace QtAws {
namespace {{ServiceName}} {

class {{ClassName}};

class {{ClassName}}Private : public {{ServiceName}}RequestPrivate {

public:
    {{ClassName}}Private(const {{ServiceName}}Request::Action action,
                                   {{ClassName}} * const q);
    {{ClassName}}Private(const {{ClassName}}Private &other,
                                   {{ClassName}} * const q);

private:
    Q_DECLARE_PUBLIC({{ClassName}})

};

} // namespace {{ServiceName}}
} // namespace QtAws

#endif
{% endwith %}
{% endwith %}
