// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASETCONTENTREQUEST_H
#define QTAWS_DELETEDATASETCONTENTREQUEST_H

#include "iotanalyticsrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class DeleteDatasetContentRequestPrivate;

class QTAWSIOTANALYTICS_EXPORT DeleteDatasetContentRequest : public IoTAnalyticsRequest {

public:
    DeleteDatasetContentRequest(const DeleteDatasetContentRequest &other);
    DeleteDatasetContentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDatasetContentRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
