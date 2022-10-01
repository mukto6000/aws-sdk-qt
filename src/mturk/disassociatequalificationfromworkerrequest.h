// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEQUALIFICATIONFROMWORKERREQUEST_H
#define QTAWS_DISASSOCIATEQUALIFICATIONFROMWORKERREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class DisassociateQualificationFromWorkerRequestPrivate;

class QTAWSMTURK_EXPORT DisassociateQualificationFromWorkerRequest : public MTurkRequest {

public:
    DisassociateQualificationFromWorkerRequest(const DisassociateQualificationFromWorkerRequest &other);
    DisassociateQualificationFromWorkerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateQualificationFromWorkerRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
