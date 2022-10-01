// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKDOCSRESPONSE_H
#define QTAWS_WORKDOCSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsworkdocsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace WorkDocs {

class WorkDocsResponsePrivate;

class QTAWSWORKDOCS_EXPORT WorkDocsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    WorkDocsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    WorkDocsResponse(WorkDocsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WorkDocsResponse)
    Q_DISABLE_COPY(WorkDocsResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
