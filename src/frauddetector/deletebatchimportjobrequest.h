// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBATCHIMPORTJOBREQUEST_H
#define QTAWS_DELETEBATCHIMPORTJOBREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteBatchImportJobRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT DeleteBatchImportJobRequest : public FraudDetectorRequest {

public:
    DeleteBatchImportJobRequest(const DeleteBatchImportJobRequest &other);
    DeleteBatchImportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBatchImportJobRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
