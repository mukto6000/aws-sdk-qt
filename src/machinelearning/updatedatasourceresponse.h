// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASOURCERESPONSE_H
#define QTAWS_UPDATEDATASOURCERESPONSE_H

#include "machinelearningresponse.h"
#include "updatedatasourcerequest.h"

namespace QtAws {
namespace MachineLearning {

class UpdateDataSourceResponsePrivate;

class QTAWSMACHINELEARNING_EXPORT UpdateDataSourceResponse : public MachineLearningResponse {
    Q_OBJECT

public:
    UpdateDataSourceResponse(const UpdateDataSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDataSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDataSourceResponse)
    Q_DISABLE_COPY(UpdateDataSourceResponse)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
