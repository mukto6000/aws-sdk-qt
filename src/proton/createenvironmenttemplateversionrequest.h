// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTTEMPLATEVERSIONREQUEST_H
#define QTAWS_CREATEENVIRONMENTTEMPLATEVERSIONREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class CreateEnvironmentTemplateVersionRequestPrivate;

class QTAWSPROTON_EXPORT CreateEnvironmentTemplateVersionRequest : public ProtonRequest {

public:
    CreateEnvironmentTemplateVersionRequest(const CreateEnvironmentTemplateVersionRequest &other);
    CreateEnvironmentTemplateVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEnvironmentTemplateVersionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
