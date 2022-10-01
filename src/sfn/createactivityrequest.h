// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACTIVITYREQUEST_H
#define QTAWS_CREATEACTIVITYREQUEST_H

#include "sfnrequest.h"

namespace QtAws {
namespace Sfn {

class CreateActivityRequestPrivate;

class QTAWSSFN_EXPORT CreateActivityRequest : public SfnRequest {

public:
    CreateActivityRequest(const CreateActivityRequest &other);
    CreateActivityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateActivityRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
