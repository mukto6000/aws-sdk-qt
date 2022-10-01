// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICETEMPLATEREQUEST_P_H
#define QTAWS_CREATESERVICETEMPLATEREQUEST_P_H

#include "protonrequest_p.h"
#include "createservicetemplaterequest.h"

namespace QtAws {
namespace Proton {

class CreateServiceTemplateRequest;

class CreateServiceTemplateRequestPrivate : public ProtonRequestPrivate {

public:
    CreateServiceTemplateRequestPrivate(const ProtonRequest::Action action,
                                   CreateServiceTemplateRequest * const q);
    CreateServiceTemplateRequestPrivate(const CreateServiceTemplateRequestPrivate &other,
                                   CreateServiceTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateServiceTemplateRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
