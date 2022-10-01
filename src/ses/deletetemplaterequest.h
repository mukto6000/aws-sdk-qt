// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETEMPLATEREQUEST_H
#define QTAWS_DELETETEMPLATEREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class DeleteTemplateRequestPrivate;

class QTAWSSES_EXPORT DeleteTemplateRequest : public SesRequest {

public:
    DeleteTemplateRequest(const DeleteTemplateRequest &other);
    DeleteTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTemplateRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
