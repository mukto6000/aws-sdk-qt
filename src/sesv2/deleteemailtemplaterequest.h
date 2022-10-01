// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILTEMPLATEREQUEST_H
#define QTAWS_DELETEEMAILTEMPLATEREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class DeleteEmailTemplateRequestPrivate;

class QTAWSSESV2_EXPORT DeleteEmailTemplateRequest : public SESv2Request {

public:
    DeleteEmailTemplateRequest(const DeleteEmailTemplateRequest &other);
    DeleteEmailTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEmailTemplateRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
