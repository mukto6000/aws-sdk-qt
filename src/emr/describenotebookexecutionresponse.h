// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTEBOOKEXECUTIONRESPONSE_H
#define QTAWS_DESCRIBENOTEBOOKEXECUTIONRESPONSE_H

#include "emrresponse.h"
#include "describenotebookexecutionrequest.h"

namespace QtAws {
namespace Emr {

class DescribeNotebookExecutionResponsePrivate;

class QTAWSEMR_EXPORT DescribeNotebookExecutionResponse : public EmrResponse {
    Q_OBJECT

public:
    DescribeNotebookExecutionResponse(const DescribeNotebookExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNotebookExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNotebookExecutionResponse)
    Q_DISABLE_COPY(DescribeNotebookExecutionResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
