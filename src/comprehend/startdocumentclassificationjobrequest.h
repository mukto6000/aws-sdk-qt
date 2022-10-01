// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDOCUMENTCLASSIFICATIONJOBREQUEST_H
#define QTAWS_STARTDOCUMENTCLASSIFICATIONJOBREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class StartDocumentClassificationJobRequestPrivate;

class QTAWSCOMPREHEND_EXPORT StartDocumentClassificationJobRequest : public ComprehendRequest {

public:
    StartDocumentClassificationJobRequest(const StartDocumentClassificationJobRequest &other);
    StartDocumentClassificationJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDocumentClassificationJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
