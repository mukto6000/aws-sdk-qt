// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPIPELINERESPONSE_H
#define QTAWS_DELETEPIPELINERESPONSE_H

#include "datapipelineresponse.h"
#include "deletepipelinerequest.h"

namespace QtAws {
namespace DataPipeline {

class DeletePipelineResponsePrivate;

class QTAWSDATAPIPELINE_EXPORT DeletePipelineResponse : public DataPipelineResponse {
    Q_OBJECT

public:
    DeletePipelineResponse(const DeletePipelineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePipelineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePipelineResponse)
    Q_DISABLE_COPY(DeletePipelineResponse)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
