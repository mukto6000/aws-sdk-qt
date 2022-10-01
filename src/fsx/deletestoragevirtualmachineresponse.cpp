// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestoragevirtualmachineresponse.h"
#include "deletestoragevirtualmachineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DeleteStorageVirtualMachineResponse
 * \brief The DeleteStorageVirtualMachineResponse class provides an interace for FSx DeleteStorageVirtualMachine responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::deleteStorageVirtualMachine
 */

/*!
 * Constructs a DeleteStorageVirtualMachineResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStorageVirtualMachineResponse::DeleteStorageVirtualMachineResponse(
        const DeleteStorageVirtualMachineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new DeleteStorageVirtualMachineResponsePrivate(this), parent)
{
    setRequest(new DeleteStorageVirtualMachineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStorageVirtualMachineRequest * DeleteStorageVirtualMachineResponse::request() const
{
    Q_D(const DeleteStorageVirtualMachineResponse);
    return static_cast<const DeleteStorageVirtualMachineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx DeleteStorageVirtualMachine \a response.
 */
void DeleteStorageVirtualMachineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStorageVirtualMachineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::DeleteStorageVirtualMachineResponsePrivate
 * \brief The DeleteStorageVirtualMachineResponsePrivate class provides private implementation for DeleteStorageVirtualMachineResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DeleteStorageVirtualMachineResponsePrivate object with public implementation \a q.
 */
DeleteStorageVirtualMachineResponsePrivate::DeleteStorageVirtualMachineResponsePrivate(
    DeleteStorageVirtualMachineResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx DeleteStorageVirtualMachine response element from \a xml.
 */
void DeleteStorageVirtualMachineResponsePrivate::parseDeleteStorageVirtualMachineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStorageVirtualMachineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
