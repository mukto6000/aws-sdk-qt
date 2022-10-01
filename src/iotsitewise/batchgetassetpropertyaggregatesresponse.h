// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETASSETPROPERTYAGGREGATESRESPONSE_H
#define QTAWS_BATCHGETASSETPROPERTYAGGREGATESRESPONSE_H

#include "iotsitewiseresponse.h"
#include "batchgetassetpropertyaggregatesrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class BatchGetAssetPropertyAggregatesResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT BatchGetAssetPropertyAggregatesResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    BatchGetAssetPropertyAggregatesResponse(const BatchGetAssetPropertyAggregatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetAssetPropertyAggregatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetAssetPropertyAggregatesResponse)
    Q_DISABLE_COPY(BatchGetAssetPropertyAggregatesResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
