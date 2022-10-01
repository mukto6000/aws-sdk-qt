// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTASKTEMPLATEREQUEST_H
#define QTAWS_GETTASKTEMPLATEREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class GetTaskTemplateRequestPrivate;

class QTAWSCONNECT_EXPORT GetTaskTemplateRequest : public ConnectRequest {

public:
    GetTaskTemplateRequest(const GetTaskTemplateRequest &other);
    GetTaskTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTaskTemplateRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
